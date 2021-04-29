/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKit/MXDiagnostic.h>

@class MXCallStackTree, NSMeasurement;

@interface MXHangDiagnostic : MXDiagnostic {

	MXCallStackTree* _callStackTree;
	NSMeasurement* _hangDuration;

}

@property (readonly) MXCallStackTree * callStackTree;              //@synthesize callStackTree=_callStackTree - In the implementation block
@property (readonly) NSMeasurement * hangDuration;                 //@synthesize hangDuration=_hangDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 callStack:(id)arg3 hangDuration:(id)arg4 ;
-(MXCallStackTree *)callStackTree;
-(NSMeasurement *)hangDuration;
@end
