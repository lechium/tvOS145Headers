//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMContainerSchemaActionBase.h"

#import "MCMContainerSchemaActionHasSinglePath-Protocol.h"

@class NSURL;

@interface MCMContainerSchemaActionStopBackupExclude : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath>
{
    NSURL *_url;	// 8 = 0x8
}

+ (id)actionIdentifier;	// IMP=0x0000000100063ac4
- (void).cxx_destruct;	// IMP=0x0000000100063a2c
- (_Bool)performWithError:(id *)arg1;	// IMP=0x0000000100063924
- (id)description;	// IMP=0x000000010006387c
- (id)initWithPathArgument:(id)arg1 context:(id)arg2;	// IMP=0x00000001000637c8

@end
