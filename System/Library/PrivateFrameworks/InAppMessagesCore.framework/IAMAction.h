/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InAppMessagesCore/InAppMessagesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary;

@interface IAMAction : NSObject <NSCopying> {

	BOOL _requiresDelegate;
	NSString* _identifier;
	NSString* _displayText;
	NSURL* _url;
	NSDictionary* _actionParameters;

}

@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayText;                  //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL requiresDelegate;                        //@synthesize requiresDelegate=_requiresDelegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionParameters;              //@synthesize actionParameters=_actionParameters - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSURL *)url;
-(NSString *)displayText;
-(BOOL)requiresDelegate;
-(NSDictionary *)actionParameters;
-(id)initWithICAction:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayText:(id)arg2 url:(id)arg3 requiresDelegate:(BOOL)arg4 actionParameters:(id)arg5 ;
@end

