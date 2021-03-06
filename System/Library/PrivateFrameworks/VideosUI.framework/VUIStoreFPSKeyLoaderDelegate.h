/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VUIStoreFPSKeyLoaderDelegate <NSObject>
@optional
-(void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
-(void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
-(void)storeFPSKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;
-(void)storeFPSKeyLoader:(id)arg1 willSucceedForKeyRequest:(id)arg2;
-(BOOL)storeFPSKeyLoader:(id)arg1 shouldKeyRequestContinueInvalidationAfterLoadingNonce:(id)arg2;

@end

