/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate, PXAssetCollectionActionManager;


@protocol PXCMMInvitation <NSObject,PXMediaTypeAggregating>
@property (nonatomic,readonly) long long shareType; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) id<PXCMMInvitationParticipant> owner; 
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset; 
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider; 
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager; 
@required
-(unsigned long long)count;
-(NSString *)identifier;
-(NSDate *)creationDate;
-(NSString *)title;
-(NSString *)subtitle;
-(NSDate *)expiryDate;
-(id<PXCMMInvitationParticipant>)owner;
-(void)acceptWithCompletionHandler:(/*^block*/id)arg1;
-(long long)shareType;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(id)contextForActivityType:(unsigned long long)arg1;

@end

