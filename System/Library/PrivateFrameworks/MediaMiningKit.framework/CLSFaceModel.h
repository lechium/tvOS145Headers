/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLSSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSFaceModel : NSObject <CLSSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _qualityNode;

}

@property (readonly) CLSSignalNode * qualityNode;                             //@synthesize qualityNode=_qualityNode - In the implementation block
@property (readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)name;
+(unsigned long long)latestVersion;
+(unsigned long long)currentAnalyzerVersion;
+(id)modelWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)minimumSupportedVersion;
-(CLSSignalNode *)qualityNode;
-(void)setupVersion1;
@end
