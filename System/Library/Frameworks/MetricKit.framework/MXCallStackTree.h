/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MXCallStackTree : NSObject <NSSecureCoding> {

	BOOL _callStackPerThread;
	NSArray* _callStackThreads;

}

@property (readonly) NSArray * callStackThreads;              //@synthesize callStackThreads=_callStackThreads - In the implementation block
@property (readonly) BOOL callStackPerThread;                 //@synthesize callStackPerThread=_callStackPerThread - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)JSONRepresentation;
-(id)initWithThreadArray:(id)arg1 aggregatedByProcess:(BOOL)arg2 ;
-(NSArray *)callStackThreads;
-(BOOL)callStackPerThread;
@end

