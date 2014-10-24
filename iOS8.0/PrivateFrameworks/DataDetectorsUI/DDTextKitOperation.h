//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataDetectorsUI/DDOperation.h>

@class UITextView;

__attribute__((visibility("hidden")))
@interface DDTextKitOperation : DDOperation
{
    struct _NSRange _range;
    int _editCount;
}

@property struct _NSRange range; // @synthesize range=_range;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (BOOL)needsToStartOver;
- (BOOL)doURLificationOnDocument;
- (void)dispatchContainerModificationBlock:(CDUnknownBlockType)arg1;
- (BOOL)_addResultsToAttributes;
- (struct __DDScanQuery *)_createScanQueryForBackend;
- (BOOL)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (void)textDidChange:(id)arg1;
- (void)cleanup;
- (id)initWithContainer:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UITextView *container; // @dynamic container;

@end
