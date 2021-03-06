/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSXPCServiceConnectionContext : NSObject <NSCopying> {

	NSString* _proem;

}

@property (nonatomic,copy,readonly) NSString * endpointDescription; 
@property (getter=isServer,nonatomic,readonly) BOOL server; 
@property (getter=isClient,nonatomic,readonly) BOOL client; 
@property (getter=isRoot,nonatomic,readonly) BOOL root; 
@property (getter=isChild,nonatomic,readonly) BOOL child; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(BOOL)isRoot;
-(BOOL)isChild;
-(BOOL)isClient;
-(BOOL)isServer;
-(NSString *)endpointDescription;
@end

