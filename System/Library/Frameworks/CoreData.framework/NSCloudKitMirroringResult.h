/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSPersistentStoreResult.h>

@class NSError, NSCloudKitMirroringRequest;

@interface NSCloudKitMirroringResult : NSPersistentStoreResult {

	BOOL _success;
	BOOL _madeChanges;
	NSError* _error;
	NSCloudKitMirroringRequest* _request;

}

@property (nonatomic,readonly) NSCloudKitMirroringRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL success;                                      //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL madeChanges;                                  //@synthesize madeChanges=_madeChanges - In the implementation block
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
-(id)description;
-(void)dealloc;
-(NSError *)error;
-(NSCloudKitMirroringRequest *)request;
-(id)initWithRequest:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 error:(id)arg4 ;
-(BOOL)success;
-(BOOL)madeChanges;
@end

