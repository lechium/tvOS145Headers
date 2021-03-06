/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMediaTypeAggregating.h>
#import <libobjc.A.dylib/PXCMMInvitation.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;
@class NSString, PHMomentShare, PHFetchResult, NSDate, PXAssetCollectionActionManager;

@interface PXCMMMomentShareInvitation : NSObject <PXMediaTypeAggregating, PXCMMInvitation, NSCopying> {

	long long _shareType;
	NSString* _title;
	NSString* _subtitle;
	id<PXCMMInvitationParticipant> _owner;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	PHMomentShare* _momentShare;
	PHFetchResult* _participantsFetchResult;
	PHFetchResult* _previewAssetsFetchResult;

}

@property (nonatomic,readonly) long long aggregateMediaType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHMomentShare * momentShare;                                                //@synthesize momentShare=_momentShare - In the implementation block
@property (nonatomic,readonly) PHFetchResult * participantsFetchResult;                                    //@synthesize participantsFetchResult=_participantsFetchResult - In the implementation block
@property (nonatomic,readonly) PHFetchResult * previewAssetsFetchResult;                                   //@synthesize previewAssetsFetchResult=_previewAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) long long shareType;                                                        //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) id<PXCMMInvitationParticipant> owner;                                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset;                                             //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider;                                  //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager; 
+(id)new;
+(id)invitationWithMomentShare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(unsigned long long)count;
-(NSString *)identifier;
-(NSDate *)creationDate;
-(NSString *)title;
-(NSString *)subtitle;
-(NSDate *)expiryDate;
-(id<PXCMMInvitationParticipant>)owner;
-(PHMomentShare *)momentShare;
-(void)acceptWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)shareType;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(long long)aggregateMediaType;
-(id)contextForActivityType:(unsigned long long)arg1 ;
-(id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg1 ;
-(PHFetchResult *)previewAssetsFetchResult;
-(id)momentShareStatus;
-(id)initWithMomentShare:(id)arg1 ;
-(id)invitationWithUpdatedParticipantsFetchResult:(id)arg1 ;
-(PHFetchResult *)participantsFetchResult;
@end

