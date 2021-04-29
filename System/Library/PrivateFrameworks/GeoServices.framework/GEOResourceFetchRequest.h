/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class NSArray, GEOResourceManifestConfiguration, NSString;

@interface GEOResourceFetchRequest : GEOXPCRequest <GEOXPCRequest> {

	BOOL _force;
	NSArray* _resources;
	GEOResourceManifestConfiguration* _manifestConfiguration;

}

@property (nonatomic,retain) NSArray * resources;                                                   //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) GEOResourceManifestConfiguration * manifestConfiguration;              //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
@property (assign,nonatomic) BOOL force;                                                            //@synthesize force=_force - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
-(BOOL)isValid;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(void)setManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(BOOL)expectsReply;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 ;
-(BOOL)force;
-(void)setForce:(BOOL)arg1 ;
@end

