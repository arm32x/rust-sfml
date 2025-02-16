# Changelog

## Unreleased
- Nothing yet

## 0.18.1

### Fixed
- Fix broken feature combinations (audio, graphics, system)

### Internal improvements
- Test non-default feature combinations in CI

## 0.18.0

### Added
- Examples for Vector3
- Examples for Vector2
- Examples for Rect
- Examples for RenderWindow
- Examples for Font
- Info about `SFML_INCLUDE_DIR` and `SFML_LIBS_DIR` environment variables

### Changed
- `window::clipboard::get_string()` now returns `String` instead of `&'static SfStr`
- `Color` now has public fields, removed the unnecessary getter/setter methods.

### Fixed
- Update requirements in the crate documentation
- Make `set_mouse_cursor` unsafe, as the cursor must stay alive while in use.
- Fix wrong `Vector3::{AddAssign, SubAssign}` impls
- Add `Hash` impl for `CursorType`
