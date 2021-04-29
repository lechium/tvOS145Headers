/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>

@class BKSHIDEventAuthenticationMessage, BKSHIDEventDeferringEnvironment, BKSHIDEventDisplay, BKSHIDEventDeferringToken, NSString;

@interface BKSHIDEventBaseAttributes : NSObject <BSDescriptionProviding, BSProtobufSerializable, NSCopying, BSDescriptionStreamable> {

	unsigned short _options;
	int _source;
	BKSHIDEventAuthenticationMessage* _authenticationMessage;
	BKSHIDEventDeferringEnvironment* _environment;
	BKSHIDEventDisplay* _display;
	BKSHIDEventDeferringToken* _token;

}

@property (nonatomic,retain) BKSHIDEventAuthenticationMessage * authenticationMessage;              //@synthesize authenticationMessage=_authenticationMessage - In the implementation block
@property (nonatomic,retain) BKSHIDEventDeferringEnvironment * environment;                         //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) BKSHIDEventDisplay * display;                                          //@synthesize display=_display - In the implementation block
@property (nonatomic,retain) BKSHIDEventDeferringToken * token;                                     //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) int source;                                                            //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned short options;                                                //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufSchema;
+(id)baseAttributesFromResolution:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(int)source;
-(void)setSource:(int)arg1 ;
-(unsigned short)options;
-(void)setOptions:(unsigned short)arg1 ;
-(BKSHIDEventDeferringToken *)token;
-(BKSHIDEventDeferringEnvironment *)environment;
-(void)setEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)setToken:(BKSHIDEventDeferringToken *)arg1 ;
-(BKSHIDEventDisplay *)display;
-(void)setDisplay:(BKSHIDEventDisplay *)arg1 ;
-(BKSHIDEventAuthenticationMessage *)authenticationMessage;
-(void)setAuthenticationMessage:(BKSHIDEventAuthenticationMessage *)arg1 ;
@end

