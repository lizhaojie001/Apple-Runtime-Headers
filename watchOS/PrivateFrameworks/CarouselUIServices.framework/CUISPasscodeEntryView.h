//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarouselUIServices/CUISPasscodeFieldDelegate-Protocol.h>

@class CUISPasscodeField, CUISPasscodeKeypadButton, NSTimer, UILabel, UITouch;
@protocol CUISPasscodeEntryViewDataSource, CUISPasscodeEntryViewDelegate;

@interface CUISPasscodeEntryView : UIView <CUISPasscodeFieldDelegate>
{
    CUISPasscodeField *_passcodeField;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIView *_keypad;
    CUISPasscodeKeypadButton *_okButton;
    CUISPasscodeKeypadButton *_deleteButton;
    CUISPasscodeKeypadButton *_cancelButton;
    _Bool _needsLayoutKeypad;
    _Bool _needsLayoutTitle;
    _Bool _titleVisible;
    NSTimer *_promptTimer;
    UITouch *_trackedTouch;
    CUISPasscodeKeypadButton *_highlightedButton;
    unsigned long _clickSound;
    struct CGRect _lastLayoutBounds;
    id <CUISPasscodeEntryViewDataSource> _dataSource;
    id <CUISPasscodeEntryViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CUISPasscodeEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CUISPasscodeEntryViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)didBeginEnteringPasscodeInPasscodeField:(id)arg1;
- (void)passcodeField:(id)arg1 didEnterPasscode:(id)arg2;
- (void)setKeyPadEnabled:(_Bool)arg1;
- (void)hideLastDigitInInputField;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_updatePreviewDigit;
- (id)_selectButtonForTouch:(id)arg1;
- (void)animateOutInputFieldWithStyle:(unsigned int)arg1 andRepromptWithTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_promptTimerExpired:(id)arg1;
- (void)animateRejectionAndReset;
- (void)_resetKeypad;
- (void)animateOutWithStyle:(unsigned int)arg1;
- (void)animateInWithStyle:(unsigned int)arg1;
- (void)_slideOutWithEndingOffsets:(struct CGPoint)arg1;
- (void)_slideInWithStartingOffsets:(struct CGPoint)arg1;
- (void)_doLockScreenOut:(_Bool)arg1;
- (void)_doLockScreenIn:(_Bool)arg1;
- (void)_keypadButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)reset;
- (void)_resetTracking;
- (void)_setKeypadNumbersDisabledForLongPasscode:(_Bool)arg1;
- (void)_updateAuxiliaryButtonsVisibility;
- (_Bool)_shouldShowPasscodeCharacters;
- (void)_setTitleVisible:(_Bool)arg1;
- (void)_layoutTitleLabel;
- (float)_estimatedKeyPadHeight;
- (void)_layoutKeypadWithCancelButtonEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)_configureAccessibleKeypadButton:(id)arg1;
- (void)_initKeypad;
- (void)_initSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

