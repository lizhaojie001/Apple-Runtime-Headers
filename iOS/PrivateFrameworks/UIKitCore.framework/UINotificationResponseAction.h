//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class UNNotificationResponse;

@interface UINotificationResponseAction : BSAction
{
    UNNotificationResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UNNotificationResponse *response; // @synthesize response=_response;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)UIActionType;
- (id)_trigger;
@property(readonly, nonatomic) _Bool isDefaultAction;
@property(readonly, nonatomic) _Bool isRemote;
@property(readonly, nonatomic) _Bool isLocal;
- (id)initWithResponse:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end

