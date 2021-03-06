//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAProtobufMessageSubmitter.h"

@class SDRDiagnosticReporter;

@interface WADatapathDiagnosticsMessageSubmitter : WAProtobufMessageSubmitter
{
    long long _groupTypeForThisSubmitter;	// 8 = 0x8
    SDRDiagnosticReporter *_ABCReporter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010005d258
@property(retain, nonatomic) SDRDiagnosticReporter *ABCReporter; // @synthesize ABCReporter=_ABCReporter;
@property(nonatomic) long long groupTypeForThisSubmitter; // @synthesize groupTypeForThisSubmitter=_groupTypeForThisSubmitter;
- (id)submitDPSRMessage:(id)arg1;	// IMP=0x0000000100057934
- (id)submitSlowWiFiMessage:(id)arg1;	// IMP=0x00000001000573ac
- (id)submitMessage:(id)arg1;	// IMP=0x0000000100057120
- (id)initWithMessageGroupType:(long long)arg1;	// IMP=0x0000000100057010

@end

