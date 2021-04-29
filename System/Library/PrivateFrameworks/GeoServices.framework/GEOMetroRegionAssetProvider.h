/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSCache;

@interface GEOMetroRegionAssetProvider : NSObject {

	NSDate* _lastCatalogLoadTime;
	unsigned _catalogLoadRetryMultiplier;
	NSCache* _fileURLCache;

}
+(id)sharedProvider;
-(id)init;
-(id)homeMetroAcceptListForCountryCode:(id)arg1 ;
-(id)homeCountryCodeAcceptListForCountryCode:(id)arg1 ;
-(id)urlForInstalledCountryCode:(id)arg1 ;
-(void)_updateCatalogAfterDelay:(double)arg1 ;
-(id)_acceptListForCountryCode:(id)arg1 name:(id)arg2 ;
-(void)_updateCatalog;
-(void)_catalogDownloadFinishedWithResult:(long long)arg1 ;
@end

