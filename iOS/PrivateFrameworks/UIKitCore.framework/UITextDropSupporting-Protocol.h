//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITextDroppable-Protocol.h>
#import <UIKitCore/UITextPasteConfigurationSupporting-Protocol.h>

@class NSAttributedString, NSMutableAttributedString;

@protocol UITextDropSupporting <UITextDroppable, UITextPasteConfigurationSupporting>
- (void)droppingFinished;
- (void)droppingStarted;
- (void)resignDropResponderWithDropPerformed:(_Bool)arg1;
- (void)becomeDropResponder;
- (_Bool)canBecomeDropResponder;
- (_Bool)allowsEditingTextAttributes;

@optional
@property(nonatomic) struct CGPoint contentOffsetForSameViewDrops;
- (void)sanitizeAttributedText:(NSMutableAttributedString *)arg1;
- (NSAttributedString *)_attributedStringForInsertionOfAttributedString:(NSAttributedString *)arg1;
@end

