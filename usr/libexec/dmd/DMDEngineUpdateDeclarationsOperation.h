//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class DMFUpdateDeclarationsRequest;

@interface DMDEngineUpdateDeclarationsOperation : DMDEngineDatabaseOperation
{
    DMFUpdateDeclarationsRequest *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100041c18
@property(retain, nonatomic) DMFUpdateDeclarationsRequest *request; // @synthesize request=_request;
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x0000000100040eb8

@end

