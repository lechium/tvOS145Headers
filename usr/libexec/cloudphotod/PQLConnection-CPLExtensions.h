//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <prequelite/PQLConnection.h>

@interface PQLConnection (CPLExtensions)
+ (id)cplInjectionFor:(id)arg1 isNotInIndexSet:(id)arg2;	// IMP=0x0000000100042eb4
+ (id)cplInjectionFor:(id)arg1 isInIndexSet:(id)arg2;	// IMP=0x0000000100042e38
- (_Bool)cplRegisterIndexSetMatch;	// IMP=0x0000000100042d88
- (_Bool)_cplRegisterDeterministicFunction:(id)arg1 nArgs:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100042b78
- (id)cplFetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x0000000100042b48
- (id)cplFetchObjectOfClass:(Class)arg1 sql:(id)arg2;	// IMP=0x0000000100042b18
- (id)cplFetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;	// IMP=0x0000000100042ae8
- (id)cplFetch:(id)arg1;	// IMP=0x0000000100042ab8
- (_Bool)cplExecute:(id)arg1;	// IMP=0x0000000100042a88
- (id)lastCPLError;	// IMP=0x00000001000429ac
@end

