//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSPersonNameComponentsFormatterPreferences : NSObject
{
}

+ (id)infoClassFromPreferencesSource:(unsigned int)arg1;
+ (id)mappedPreferencesForPreferences:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
+ (void)_syncronizeGizmoDefaultWithKey:(id)arg1 value:(int)arg2;
+ (void)setShortNameIsEnabled:(_Bool)arg1;
+ (void)setPreferNicknamesDefault:(_Bool)arg1;
+ (void)setShortNameFormat:(int)arg1;
+ (void)setDefaultDisplayNameOrder:(int)arg1;
+ (void)_postPreferencesChangedNotification;
+ (void)_setPreference:(id)arg1 toValue:(int)arg2 usingExistingGetter:(SEL)arg3;

@end

