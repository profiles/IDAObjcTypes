#ifndef UIKIT_H_
#define UIKIT_H_

#import "../CoreFoundation/Types.h"
#import "../CoreGraphics/Types.h"
#import "../Foundation/Types.h"

typedef struct __UIImage *UIImage;

typedef struct UIEdgeInsets {
    CGFloat top, left, bottom, right;
} UIEdgeInsets;

typedef struct UIOffset {
    CGFloat horizontal, vertical;
} UIOffset;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

enum UIEventType : NSInteger {
    UIEventTypeTouches,
    UIEventTypeMotion,
    UIEventTypeRemoteControl,
    UIEventTypePresses,
    UIEventTypePhysicalKeyboard,   // from research
    UIEventTypeMove,               // from research
    UIEventTypeWheel = 7,          // from research
    UIEventTypeGameController = 8, // from research
    UIEventTypeScroll = 10,
    UIEventTypeHover = 11,
    UIEventTypePencil = 13, // from research
    UIEventTypeTransform = 14
};

enum UIEventSubtype : NSInteger {
    UIEventSubtypeNone = 0,
    UIEventSubtypeMotionShake = 1,
    UIEventSubtypeRemoteControlPlay = 100,
    UIEventSubtypeRemoteControlPause = 101,
    UIEventSubtypeRemoteControlStop = 102,
    UIEventSubtypeRemoteControlTogglePlayPause = 103,
    UIEventSubtypeRemoteControlNextTrack = 104,
    UIEventSubtypeRemoteControlPreviousTrack = 105,
    UIEventSubtypeRemoteControlBeginSeekingBackward = 106,
    UIEventSubtypeRemoteControlEndSeekingBackward = 107,
    UIEventSubtypeRemoteControlBeginSeekingForward = 108,
    UIEventSubtypeRemoteControlEndSeekingForward = 109,
};

enum UIEventButtonMask : NSInteger {
    UIEventButtonMaskPrimary = 1 << 0,
    UIEventButtonMaskSecondary = 1 << 1
};

enum UIButtonType : NSInteger {
    UIButtonTypeCustom = 0,
    UIButtonTypeSystem, // iOS 7+
    UIButtonTypeDetailDisclosure,
    UIButtonTypeInfoLight,
    UIButtonTypeInfoDark,
    UIButtonTypeContactAdd,
    UIButtonTypeClose,
    UIButtonTypeRoundedRect = UIButtonTypeSystem
};

enum UITouchPhase : NSInteger {
    UITouchPhaseBegan,
    UITouchPhaseMoved,
    UITouchPhaseStationary,
    UITouchPhaseEnded,
    UITouchPhaseCancelled,
    UITouchPhaseRegionEntered,
    UITouchPhaseRegionMoved,
    UITouchPhaseRegionExited
};

enum UITouchType : NSInteger {
    UITouchTypeDirect,
    UITouchTypeIndirect,
    UITouchTypePencil,
    UITouchTypeStylus,
    UITouchTypeIndirectPointer
};

enum UITouchProperties : NSInteger {
    UITouchPropertyForce = (1UL << 0),
    UITouchPropertyAzimuth = (1UL << 1),
    UITouchPropertyAltitude = (1UL << 2),
    UITouchPropertyLocation = (1UL << 3)
};

enum UIForceTouchCapability : NSInteger {
    UIForceTouchCapabilityUnknown = 0,
    UIForceTouchCapabilityUnavailable = 1,
    UIForceTouchCapabilityAvailable = 2
};

enum UIControlEvents : NSUInteger {
    UIControlEventTouchDown = 1 << 0,
    UIControlEventTouchDownRepeat = 1 << 1,
    UIControlEventTouchDragInside = 1 << 2,
    UIControlEventTouchDragOutside = 1 << 3,
    UIControlEventTouchDragEnter = 1 << 4,
    UIControlEventTouchDragExit = 1 << 5,
    UIControlEventTouchUpInside = 1 << 6,
    UIControlEventTouchUpOutside = 1 << 7,
    UIControlEventTouchCancel = 1 << 8,
    UIControlEventValueChanged = 1 << 12,
    UIControlEventPrimaryActionTriggered = 1 << 13,
    UIControlEventEditingDidBegin = 1 << 16,
    UIControlEventEditingChanged = 1 << 17,
    UIControlEventEditingDidEnd = 1 << 18,
    UIControlEventEditingDidEndOnExit = 1 << 19,
    UIControlEventAllTouchEvents = 0x00000FFF,
    UIControlEventAllEditingEvents = 0x000F0000,
    UIControlEventApplicationReserved = 0x0F000000,
    UIControlEventSystemReserved = 0xF0000000,
    UIControlEventAllEvents = 0xFFFFFFFF
};

enum UIControlContentVerticalAlignment : NSInteger {
    UIControlContentVerticalAlignmentCenter = 0,
    UIControlContentVerticalAlignmentTop = 1,
    UIControlContentVerticalAlignmentBottom = 2,
    UIControlContentVerticalAlignmentFill = 3
};

enum UIControlContentHorizontalAlignment : NSInteger {
    UIControlContentHorizontalAlignmentCenter = 0,
    UIControlContentHorizontalAlignmentLeft = 1,
    UIControlContentHorizontalAlignmentRight = 2,
    UIControlContentHorizontalAlignmentFill = 3,
    UIControlContentHorizontalAlignmentLeading = 4,
    UIControlContentHorizontalAlignmentTrailing = 5
};

enum UIControlState : NSUInteger {
    UIControlStateNormal = 0,
    UIControlStateHighlighted = 1 << 0,
    UIControlStateDisabled = 1 << 1,
    UIControlStateSelected = 1 << 2,
    UIControlStateFocused = 1 << 3,
    UIControlStateApplication = 0x00FF0000,
    UIControlStateReserved = 0xFF000000
};

enum UIUserInterfaceSizeClass : NSInteger {
    UIUserInterfaceSizeClassUnspecified = 0,
    UIUserInterfaceSizeClassCompact = 1,
    UIUserInterfaceSizeClassRegular = 2,
};

enum UIUserInterfaceStyle : NSInteger {
    UIUserInterfaceStyleUnspecified,
    UIUserInterfaceStyleLight,
    UIUserInterfaceStyleDark,
};

enum UIDisplayGamut : NSInteger {
    UIDisplayGamutUnspecified = -1,
    UIDisplayGamutSRGB,
    UIDisplayGamutP3
};

enum UIDeviceOrientation : NSInteger {
    UIDeviceOrientationUnknown,
    UIDeviceOrientationPortrait,
    UIDeviceOrientationPortraitUpsideDown,
    UIDeviceOrientationLandscapeLeft,
    UIDeviceOrientationLandscapeRight,
    UIDeviceOrientationFaceUp,
    UIDeviceOrientationFaceDown
};

enum UIInterfaceOrientation : NSInteger {
    UIInterfaceOrientationPortrait = UIDeviceOrientationPortrait,
    UIInterfaceOrientationPortraitUpsideDown = UIDeviceOrientationPortraitUpsideDown,
    UIInterfaceOrientationLandscapeLeft = UIDeviceOrientationLandscapeLeft,
    UIInterfaceOrientationLandscapeRight = UIDeviceOrientationLandscapeRight
};

enum UIDeviceBatteryState : NSInteger {
    UIDeviceBatteryStateUnknown,
    UIDeviceBatteryStateUnplugged,
    UIDeviceBatteryStateCharging,
    UIDeviceBatteryStateFull,
};

enum UIUserInterfaceIdiom : NSInteger {
    UIUserInterfaceIdiomUnspecified = -1,
    UIUserInterfaceIdiomPhone,
    UIUserInterfaceIdiomPad,
    UIUserInterfaceIdiomTV,
    UIUserInterfaceIdiomCarPlay,
    UIUserInterfaceIdiomMac = 5,
};

enum UIUserInterfaceLevel : NSInteger {
    UIUserInterfaceLevelUnspecified = -1,
    UIUserInterfaceLevelBase,
    UIUserInterfaceLevelElevated
};

UIOffset UIOffsetZero;

UIEdgeInsets UIEdgeInsetsZero;

typedef NSString *UIContentSizeCategory;

extern const float UITableCellDefaultFontSize;
extern const float UITableViewCellDefaultFontSize;
extern const float UIWebViewGrowsAndShrinksToFitHeight;
extern const float UIWebViewScalesToFitScale;
extern const float UIWebViewStandardViewportWidth;

extern NSString *const UIWindowDidMoveToScreenNotification;
extern NSString *const UIWindowDidRotateNotification;
extern NSString *const UIWindowNewScreenUserInfoKey;
extern NSString *const UIWindowWillRotateNotification;
extern NSString *const UIKeyboardIsLocalUserInfoKey;
extern NSString *const UIKeyInputPageUp;
extern NSString *const UIKeyInputPageDown;

extern const NSNotificationName UIApplicationDidReceiveMemoryWarningNotification;
extern const NSNotificationName UIApplicationBackgroundRefreshStatusDidChangeNotification;
extern const NSNotificationName UIApplicationDidChangeStatusBarFrameNotification;
extern const NSNotificationName UIApplicationDidBecomeActiveNotification;

#endif
