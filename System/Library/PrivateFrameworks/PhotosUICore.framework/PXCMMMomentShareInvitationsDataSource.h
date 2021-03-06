/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCMMInvitationsDataSource.h>

@class PXCMMMomentShareInvitationsDataSourceState;

@interface PXCMMMomentShareInvitationsDataSource : PXCMMInvitationsDataSource {

	PXCMMMomentShareInvitationsDataSourceState* _state;

}

@property (nonatomic,readonly) PXCMMMomentShareInvitationsDataSourceState * state;              //@synthesize state=_state - In the implementation block
+(id)new;
-(id)init;
-(PXCMMMomentShareInvitationsDataSourceState *)state;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithState:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)invitationAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectIDAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)invitationForObjectID:(id)arg1 ;
@end

