/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ML3ClientImportResult : NSObject <NSSecureCoding> {

	BOOL _success;
	NSDictionary* _resultingDatabasePersistentIDs;

}

@property (nonatomic,readonly) BOOL success;                                                    //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resultingDatabasePersistentIDs;              //@synthesize resultingDatabasePersistentIDs=_resultingDatabasePersistentIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)success;
-(id)initWithSuccess:(BOOL)arg1 resultingDatabasePersistentIDs:(id)arg2 ;
-(NSDictionary *)resultingDatabasePersistentIDs;
@end

