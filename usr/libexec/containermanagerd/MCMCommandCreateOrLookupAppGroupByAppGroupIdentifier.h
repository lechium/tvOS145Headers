//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMCommand.h"

@class MCMClientConnection;

@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier : MCMCommand
{
    MCMClientConnection *_clientConnection;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x000000010001af40
+ (unsigned long long)command;	// IMP=0x000000010001af38
- (void).cxx_destruct;	// IMP=0x000000010001b834
@property(retain, nonatomic) MCMClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
- (_Bool)fromQueue:(id)arg1 executeWithError:(unsigned long long *)arg2;	// IMP=0x000000010001af4c

@end

