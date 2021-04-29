/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXDataSectionManager.h>

@protocol PXOutlineDataSectionManagerDelegate;
@class NSDictionary;

@interface PXOutlineDataSectionManager : PXDataSectionManager {

	NSDictionary* _dataSectionManagersByDataSectionObjects;
	id<PXOutlineDataSectionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXOutlineDataSectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PXOutlineDataSectionManagerDelegate>)delegate;
-(void)setDelegate:(id<PXOutlineDataSectionManagerDelegate>)arg1 ;
-(id)createDataSection;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2 ;
-(id)_changeDetailsForNewDataSection:(id)arg1 ;
-(id)childDataSectionManagerForOutlineObject:(id)arg1 ;
-(void)rearrangeSectionContent;
-(unsigned long long)childChangeDescriptorsInvalidatingDataSection;
@end
