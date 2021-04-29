/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString, NSNumber, NSArray, SASmsGroupName;

@interface SASmsSearch : SADomainCommand

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * senders; 
@property (nonatomic,retain) SASmsGroupName * smsGroup; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSNumber * unread; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)start;
-(id)groupIdentifier;
-(NSDate *)end;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setEnd:(NSDate *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(NSArray *)senders;
-(void)setSenders:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSNumber *)outgoing;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(SASmsGroupName *)smsGroup;
-(void)setSmsGroup:(SASmsGroupName *)arg1 ;
-(NSNumber *)unread;
-(void)setUnread:(NSNumber *)arg1 ;
@end
