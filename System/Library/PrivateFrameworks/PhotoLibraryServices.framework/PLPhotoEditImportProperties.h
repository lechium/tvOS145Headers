/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLPhotoEditImportProperties : NSObject {

	long long _baseEXIFOrientation;
	double _baseDuration;

}

@property (nonatomic,readonly) long long baseEXIFOrientation;              //@synthesize baseEXIFOrientation=_baseEXIFOrientation - In the implementation block
@property (nonatomic,readonly) double baseDuration;                        //@synthesize baseDuration=_baseDuration - In the implementation block
+(id)importPropertiesWithEXIFOrientation:(long long)arg1 duration:(double)arg2 ;
+(id)importPropertiesWithEXIFOrientation:(long long)arg1 ;
-(long long)baseEXIFOrientation;
-(double)baseDuration;
@end

