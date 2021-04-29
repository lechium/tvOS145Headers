//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ACAccount, NSArray, NSString, UpdatesResponse;

@interface UpdatesTask : Task
{
    ACAccount *_account;	// 8 = 0x8
    NSArray *_apps;	// 16 = 0x10
    _Bool _isUserInitiated;	// 24 = 0x18
    NSString *_logKey;	// 32 = 0x20
    UpdatesResponse *_response;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100146f60
@property(retain, nonatomic) UpdatesResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (id)_requestBodyDictionary;	// IMP=0x0000000100146b44
- (id)_newDictionaryWithUpdatableApp:(id)arg1;	// IMP=0x00000001001469e8
- (id)_newArrayWithUpdatableApps:(id)arg1;	// IMP=0x0000000100146834
- (id)_copyLocalAppsDictionaries;	// IMP=0x000000010014681c
- (id)_bagURL;	// IMP=0x00000001001467a4
- (void)main;	// IMP=0x0000000100146250
- (id)initWithAccount:(id)arg1 apps:(id)arg2 isUserInitiated:(_Bool)arg3;	// IMP=0x00000001001460f8

@end

