/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAMPGetState, NSArray;

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand

@property (nonatomic,retain) SAMPGetState * getState; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) double routeTimeout; 
+(id)getStateResponseRemote;
+(id)getStateResponseRemoteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAMPGetState *)getState;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
-(void)setGetState:(SAMPGetState *)arg1 ;
@end

