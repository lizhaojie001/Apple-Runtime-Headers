//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/PTComponentObserver-Protocol.h>
#import <PrototypeTools/PTModuleComponent-Protocol.h>
#import <PrototypeTools/PTSettingsKeyPathObserver-Protocol.h>

@class NSArray, NSHashTable, NSPredicate, NSString, PTSettings;
@protocol PTComponentObserver;

@interface PTModule : NSObject <PTSettingsKeyPathObserver, PTComponentObserver, PTModuleComponent>
{
    NSHashTable *_observers;
    NSArray *_components;
    id <PTComponentObserver> _componentObserver;
    PTSettings *_settings;
    NSArray *_allSections;
    NSArray *_enabledSections;
    NSPredicate *_appearancePredicate;
    NSString *_childSettingsKeyPath;
    NSString *_title;
}

+ (_Bool)supportsSecureCoding;
+ (id)moduleWithSettings:(id)arg1;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (id)submoduleWithModule:(id)arg1;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2;
+ (id)sectionWithRows:(id)arg1;
+ (id)moduleWithTitle:(id)arg1 contents:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *childSettingsKeyPath; // @synthesize childSettingsKeyPath=_childSettingsKeyPath;
@property(retain, nonatomic) NSPredicate *appearancePredicate; // @synthesize appearancePredicate=_appearancePredicate;
@property(readonly, nonatomic) NSArray *enabledSections; // @synthesize enabledSections=_enabledSections;
@property(readonly, nonatomic) NSArray *allSections; // @synthesize allSections=_allSections;
@property(retain, nonatomic) PTSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <PTComponentObserver> componentObserver; // @synthesize componentObserver=_componentObserver;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)_remoteEditingWhitelistedModule;
- (id)_settingsForComponent:(id)arg1;
- (void)_reportSectionInsertsAndDeletesRelativeTo:(id)arg1;
- (id)_computeEnabledSections;
- (void)_updateEnabledSections;
- (void)enabledSectionsDidChange:(id)arg1;
- (void)sectionDidReload:(id)arg1;
- (void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (id)_remoteEditingWhitelistedComponent;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)indexPathForRow:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;
- (id)sectionAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfSections;
- (void)dealloc;
- (id)initWithContents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

