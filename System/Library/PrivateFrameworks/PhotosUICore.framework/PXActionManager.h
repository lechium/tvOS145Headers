/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXActionPerformerDelegate;
@class NSSet;

@interface PXActionManager : NSObject {

	id<PXActionPerformerDelegate> _performerDelegate;
	NSSet* _allowedActionTypes;

}

@property (assign,nonatomic,__weak) id<PXActionPerformerDelegate> performerDelegate;              //@synthesize performerDelegate=_performerDelegate - In the implementation block
@property (nonatomic,copy) NSSet * allowedActionTypes;                                            //@synthesize allowedActionTypes=_allowedActionTypes - In the implementation block
+(/*^block*/id)_unlockDeviceHandler;
+(void)setEnsureUnlockedDeviceHandler:(/*^block*/id)arg1 ;
-(id)barButtonItemForActionType:(id)arg1 ;
-(id)alertActionForActionType:(id)arg1 ;
-(id)activityForActionType:(id)arg1 ;
-(id)actionPerformerForActionType:(id)arg1 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)systemImageNameForActionType:(id)arg1 ;
-(BOOL)isActionTypeAllowed:(id)arg1 ;
-(id<PXActionPerformerDelegate>)performerDelegate;
-(void)setPerformerDelegate:(id<PXActionPerformerDelegate>)arg1 ;
-(NSSet *)allowedActionTypes;
-(void)setAllowedActionTypes:(NSSet *)arg1 ;
-(id)previewActionForActionType:(id)arg1 image:(id)arg2 ;
-(id)alertActionViewControllerForActionType:(id)arg1 ;
@end

