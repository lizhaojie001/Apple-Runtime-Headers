//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsBarsController.h>

@class PHPerson, UIButton;

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController
{
    UIButton *_peopleTitleView;
    PHPerson *_person;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) UIButton *peopleTitleView; // @synthesize peopleTitleView=_peopleTitleView;
- (id)createAssetActionManager;
- (id)createTitleView;

@end

