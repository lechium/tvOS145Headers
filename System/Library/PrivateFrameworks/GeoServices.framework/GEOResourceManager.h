/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOResourceManifestConfiguration;

@interface GEOResourceManager : NSObject {

	GEOResourceManifestConfiguration* _configuration;

}
+(id)sharedManager;
+(id)sharedManagerForConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)allResourceNames;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(BOOL)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(void)dataForSignedResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 resultHandler:(/*^block*/id)arg4 ;
@end
