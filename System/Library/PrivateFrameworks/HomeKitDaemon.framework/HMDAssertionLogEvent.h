/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDDiagnosticReportLogging.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent <HMDDiagnosticReportLogging> {

	NSString* _description;
	NSString* _reason;

}

@property (copy,readonly) NSString * diagnosticReportEventType; 
@property (copy,readonly) NSString * diagnosticReportEventSubType; 
@property (copy,readonly) NSString * reason;                                    //@synthesize reason=_reason - In the implementation block
-(id)description;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)updateDiagnosticReportSignature:(id)arg1 ;
@end

