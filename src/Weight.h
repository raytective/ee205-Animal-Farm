///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   25_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "config.h"
#include <string>
#include <ostream>

class Weight {
public:
    typedef float t_weight;
    enum UnitOfWeight{ POUND, KILO, SLUG };
    static const t_weight UNKNOWN_WEIGHT;
    static const t_weight KILOS_IN_A_POUND;
    static const t_weight SLUGS_IN_A_POUND;
    static const std::string POUND_LABEL;
    static const std::string KILO_LABEL;
    static const std::string SlUG_LABEL;

public:
    static t_weight fromKilogramToPound (float kilogram) noexcept;
    static t_weight fromPoundToKilogram (float pound) noexcept;
    static t_weight fromSlugToPound (float slug) noexcept;
    static t_weight fromPoundToSlug (float pound ) noexcept;
    static t_weight convertWeight (float fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit) noexcept;

public:
    void setWeight (float newWeight);
    void setWeight (float newWeight, UnitOfWeight weightUnits);
    t_weight getWeight() const noexcept;
    t_weight getWeight(UnitOfWeight weightUnits) const noexcept;
    t_weight getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit() const noexcept;

    bool isWeightKnown() const noexcept;
    bool hasMaxWeight() const noexcept;

    Weight () noexcept;
    Weight (t_weight newWeight);
    Weight (UnitOfWeight newUnitOfWeight) noexcept;
    Weight (t_weight newWeight, UnitOfWeight newUnitOfWeight);
    Weight (t_weight newWeight, t_weight newMaxWeight);
    Weight (UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);
    Weight (t_weight newWeight, UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);

    bool isWeightValid (t_weight checkWeight) const noexcept;
    bool validate () const noexcept;
    void dump () const noexcept;

    bool operator== (const Weight &rhs_Weight) const;
    bool operator< (const Weight &rhs_Weight) const;
    Weight& operator+= (t_weight rhs_addToWeight);
    friend std::ostream& operator<<(std::ostream &lhs_stream, const Weight &rhs_Weight);
    friend std::ostream& operator<<(std::ostream &lhs_stream, const Weight::UnitOfWeight rhs_UnitOfWeight);


private:
    void setMaxWeight (t_weight newMaxWeight);

    t_weight weight;
    t_weight maxWeight;
    enum UnitOfWeight unitOfWeight = POUND;
    bool bIsKnown = false;
    bool bHasMax = false;

};
