/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate {

	BOOL _extensionCandidate;
	NSString* _candidate;
	NSString* _input;
	long long* _cursorMovement;

}

@property (nonatomic,copy) NSString * candidate;                                               //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,copy) NSString * input;                                                   //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) long long* cursorMovement;                                        //@synthesize cursorMovement=_cursorMovement - In the implementation block
@property (assign,getter=isExtensionCandidate,nonatomic) BOOL extensionCandidate;              //@synthesize extensionCandidate=_extensionCandidate - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3 ;
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 ;
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 customInfoType:(unsigned long long)arg3 ;
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 cursorMovement:(long long)arg3 ;
+(id)candidateWithUnchangedInput:(id)arg1 ;
+(id)secureCandidateForInput:(id)arg1 slotID:(unsigned)arg2 ;
+(id)secureCandidateForInput:(id)arg1 slotID:(unsigned)arg2 customInfoType:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)input;
-(void)setInput:(NSString *)arg1 ;
-(NSString *)candidate;
-(void)setCandidate:(NSString *)arg1 ;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(long long*)cursorMovement;
-(BOOL)isExtensionCandidate;
-(id)candidateByReplacingWithCandidate:(id)arg1 ;
-(id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 ;
-(id)initWithCandidate:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3 ;
-(id)initWithUnchangedInput:(id)arg1 ;
-(id)initWithResponseCandidate:(id)arg1 ;
-(void)setExtensionCandidate:(BOOL)arg1 ;
-(void)setCursorMovement:(long long*)arg1 ;
@end

