/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/WebInspector-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface RWIDriverState : NSObject <NSCopying> {

	BOOL _active;
	NSSet* _sessionIdentifiers;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSSet * sessionIdentifiers;                 //@synthesize sessionIdentifiers=_sessionIdentifiers - In the implementation block
+(id)active;
+(id)inactive;
+(BOOL)isValidPayload:(id)arg1 ;
+(id)decodeFromPayload:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)encodeToPayload:(id)arg1 ;
-(NSSet *)sessionIdentifiers;
-(void)setSessionIdentifiers:(NSSet *)arg1 ;
@end

