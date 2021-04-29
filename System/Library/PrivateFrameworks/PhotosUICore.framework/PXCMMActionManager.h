/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXCMMActionPerformerDelegate;
@class NSMutableDictionary;

@interface PXCMMActionManager : NSObject {

	id<PXCMMActionPerformerDelegate> _performerDelegate;
	NSMutableDictionary* _performerClassByType;

}

@property (nonatomic,readonly) NSMutableDictionary * performerClassByType;                           //@synthesize performerClassByType=_performerClassByType - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMActionPerformerDelegate> performerDelegate;              //@synthesize performerDelegate=_performerDelegate - In the implementation block
-(id)init;
-(id)actionPerformerForActionType:(id)arg1 ;
-(id<PXCMMActionPerformerDelegate>)performerDelegate;
-(void)setPerformerDelegate:(id<PXCMMActionPerformerDelegate>)arg1 ;
-(id)publishActionPerformer;
-(id)messageComposeActionPerformer;
-(id)photosPickerActionPerformer;
-(id)sendBackActionPerformer;
-(Class)actionPerformerClassForActionType:(id)arg1 ;
-(NSMutableDictionary *)performerClassByType;
@end
