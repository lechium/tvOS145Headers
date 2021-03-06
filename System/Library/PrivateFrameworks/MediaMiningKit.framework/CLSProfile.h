/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CLSProfile : NSObject {

	NSString* _uuid;

}

@property (nonatomic,copy,readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
+(id)identifier;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)profileDependenciesIdentifiers;
+(id)supportedMeaningClueKeys;
-(id)description;
-(id)init;
-(id)uniqueIdentifier;
-(NSString *)uuid;
-(void)processResultsSynchronouslyForInvestigation:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
@end

