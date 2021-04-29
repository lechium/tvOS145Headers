/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLAPIEngineDelegate <NSObject>
@optional
-(void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)requestDidSucceedWithConnectionIdentifier:(id)arg1 userInfo:(id)arg2;
-(void)fileUploadDidProgress:(double)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)fileUploadDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)linkBookmarkDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)accountUpdateDidSucceed:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemUpdateDidSucceed:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemDeletionDidSucceed:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemRestorationDidSucceed:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemListRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)accountCreationSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)storeProductInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)storeReceiptRedemptionSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;

@end

