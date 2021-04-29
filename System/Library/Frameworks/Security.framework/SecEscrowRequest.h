/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Security/SecEscrowRequestable.h>

@class NSXPCConnection, NSString;

@interface SecEscrowRequest : NSObject <SecEscrowRequestable> {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)request:(id*)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)fetchRequestWaitingOnPasscode:(id*)arg1 ;
-(BOOL)resetAllRequests:(id*)arg1 ;
-(unsigned long long)storePrerecordsInEscrow:(id*)arg1 ;
-(BOOL)triggerEscrowUpdate:(id)arg1 error:(id*)arg2 ;
-(id)fetchStatuses:(id*)arg1 ;
-(BOOL)pendingEscrowUpload:(id*)arg1 ;
-(BOOL)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 error:(id*)arg3 ;
-(id)fetchPrerecord:(id)arg1 error:(id*)arg2 ;
@end
