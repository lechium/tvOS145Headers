//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDPayloadMetadata.h"

@interface DMDCommandPayloadMetadata : DMDPayloadMetadata
{
}

+ (id)fetchRequestForCommandsPendingDeleteFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x0000000100023924
+ (id)fetchRequestForCommandsPendingRemovalFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x0000000100023798
+ (id)fetchRequestForCommandsPendingExecutionFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x0000000100023604
+ (id)fetchRequestForCommandsFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x00000001000235f4
+ (id)fetchRequestForCommandsFromOrganizationWithIdentifier:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00000001000234b4
+ (id)commandsWithPayloadDictionaries:(id)arg1 organizationIdentifier:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x000000010002310c

@end

