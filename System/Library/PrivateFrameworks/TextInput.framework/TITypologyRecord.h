/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface TITypologyRecord : NSObject <NSSecureCoding> {

	double _timestamp;
	NSUUID* _recordID;

}

@property (assign,nonatomic) double timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSUUID * recordID;              //@synthesize recordID=_recordID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recordClasses;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(id)shortDescription;
-(void)setTimestamp:(double)arg1 ;
-(NSUUID *)recordID;
-(id)textSummary;
-(id)changedText;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(id)textSummaryForAutocorrection:(id)arg1 ;
-(void)setRecordID:(NSUUID *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end
