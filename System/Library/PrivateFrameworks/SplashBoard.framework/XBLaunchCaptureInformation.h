/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface XBLaunchCaptureInformation : NSObject <NSSecureCoding> {

	unsigned long long _estimatedMemoryImpact;
	NSString* _caarFilePath;

}

@property (assign,nonatomic) unsigned long long estimatedMemoryImpact;              //@synthesize estimatedMemoryImpact=_estimatedMemoryImpact - In the implementation block
@property (nonatomic,copy) NSString * caarFilePath;                                 //@synthesize caarFilePath=_caarFilePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)estimatedMemoryImpact;
-(void)setEstimatedMemoryImpact:(unsigned long long)arg1 ;
-(NSString *)caarFilePath;
-(void)setCaarFilePath:(NSString *)arg1 ;
@end
