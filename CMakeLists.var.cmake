# Getting effect_name from the BG_PRODUCT_NAME
string(REGEX REPLACE "^(.*)_(.*)$" "\\1" effect_name "${PROJECT_NAME}")

# List of components included in the project.
set(components
    ${effect_name}_processor
)
