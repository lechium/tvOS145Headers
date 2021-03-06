/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLAssetsdClientServiceProtocol.h>

@class NSMutableArray, NSString;

@interface PLAssetsdClientService : NSObject <PLAssetsdClientServiceProtocol> {

	NSMutableArray* _libraryUnavailabilityHandlers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(BOOL)arg3 data:(id)arg4 error:(id)arg5 ;
-(void)assetAvailableForIdentifier:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)libraryBecameUnavailable:(id)arg1 reason:(id)arg2 ;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
@end

