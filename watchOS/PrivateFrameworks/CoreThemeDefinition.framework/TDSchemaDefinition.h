//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, TDSchemaCategory;

@interface TDSchemaDefinition : NSManagedObject
{
}

+ (const CDStruct_80a119ee *)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2;
+ (const CDStruct_80a119ee *)sortedElementDefinitionAtIndex:(unsigned int)arg1 withSchema:(id)arg2;
+ (unsigned int)elementDefinitionCountWithSchema:(id)arg1;
- (id)displayName;
- (id)previewImage;

// Remaining properties
@property(retain, nonatomic) TDSchemaCategory *category; // @dynamic category;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *parts; // @dynamic parts;
@property _Bool published; // @dynamic published;

@end

