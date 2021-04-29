/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TILinguisticAssetDownloading.h>

@interface TILinguisticAssetDownloadClient : NSObject <TILinguisticAssetDownloading>
+(id)_dispatchQueue;
+(/*^block*/id)_internalHandlerForHandler:(/*^block*/id)arg1 connection:(id)arg2 ;
-(void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_newXPCConnection;
@end

