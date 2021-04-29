/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOResource, NSArray, NSString, NSData;

@interface GEOResourceInfo : NSObject {

	GEOResource* _resource;
	NSArray* _equivalentResources;
	BOOL _allowResumingPartialDownload;
	NSString* _eTag;

}

@property (assign,setter=_setAllowResumingPartialDownload:,getter=_allowResumingPartialDownload,nonatomic) BOOL allowResumingPartialDownload;              //@synthesize allowResumingPartialDownload=_allowResumingPartialDownload - In the implementation block
@property (nonatomic,copy) NSArray * equivalentResources;                                                                                                  //@synthesize equivalentResources=_equivalentResources - In the implementation block
@property (nonatomic,readonly) GEOResource * resource;                                                                                                     //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) int validationMethod; 
@property (nonatomic,copy) NSString * eTag;                                                                                                                //@synthesize eTag=_eTag - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSData * checksum; 
-(NSString *)name;
-(id)description;
-(int)type;
-(id)initWithResource:(id)arg1 ;
-(GEOResource *)resource;
-(NSData *)checksum;
-(int)validationMethod;
-(void)setEquivalentResources:(NSArray *)arg1 ;
-(BOOL)shouldCheckForUpdateForResourceAtPath:(id)arg1 useExtendedAttrs:(BOOL)arg2 forceUpdateCheck:(BOOL)arg3 log:(id)arg4 ;
-(BOOL)validateResourceAtPath:(id)arg1 useExtendedAttrs:(BOOL)arg2 log:(id)arg3 ;
-(NSArray *)equivalentResources;
-(BOOL)_allowResumingPartialDownload;
-(NSString *)eTag;
-(BOOL)validateResource:(id)arg1 log:(id)arg2 ;
-(void)_setAllowResumingPartialDownload:(BOOL)arg1 ;
-(void)setETag:(NSString *)arg1 ;
@end

