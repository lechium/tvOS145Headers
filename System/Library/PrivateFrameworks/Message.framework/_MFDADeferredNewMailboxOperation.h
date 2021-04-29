/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/MFOfflineCacheOperation.h>
#import <libobjc.A.dylib/MFDADeferredFolderChangeOperation.h>

@class NSString;

@interface _MFDADeferredNewMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {

	NSString* _displayName;
	NSString* _parentFolderID;
	NSString* _temporaryFolderID;

}
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)folderChangeResult;
-(void)applyToFolderMap:(id)arg1 ;
-(id)initWithDisplayName:(id)arg1 parentFolderID:(id)arg2 temporaryFolderID:(id)arg3 ;
@end

