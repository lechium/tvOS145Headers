/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMemoryInfoMutating.h>

@class AFMemoryInfo, NSString;

@interface _AFMemoryInfoMutation : NSObject <AFMemoryInfoMutating> {

	AFMemoryInfo* _baseModel;
	unsigned long long _virtualMemorySizeInBytes;
	int _numberOfRegions;
	int _pageSizeInBytes;
	unsigned long long _residentMemorySizeInBytes;
	unsigned long long _peakResidentMemorySizeInBytes;
	unsigned long long _physicalMemoryFootprintInBytes;
	struct {
		unsigned isDirty : 1;
		unsigned hasVirtualMemorySizeInBytes : 1;
		unsigned hasNumberOfRegions : 1;
		unsigned hasPageSizeInBytes : 1;
		unsigned hasResidentMemorySizeInBytes : 1;
		unsigned hasPeakResidentMemorySizeInBytes : 1;
		unsigned hasPhysicalMemoryFootprintInBytes : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setVirtualMemorySizeInBytes:(unsigned long long)arg1 ;
-(void)setNumberOfRegions:(int)arg1 ;
-(void)setPageSizeInBytes:(int)arg1 ;
-(void)setResidentMemorySizeInBytes:(unsigned long long)arg1 ;
-(void)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1 ;
-(void)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1 ;
@end

